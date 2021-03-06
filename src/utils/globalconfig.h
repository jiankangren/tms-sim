/*
 * This file is part of tms-sim.
 *
 * Copyright 2014 University of Augsburg
 *
 * tms-sim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * tms-sim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with tms-sim.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * $Id: globalconfig.h 1358 2016-02-17 16:18:43Z klugeflo $
 * @file globalconfig.h
 * @brief Global configuration of tms-sim through KV-File
 * @author Florian Kluge <kluge@informatik.uni-augsburg.de>
 */

#ifndef UTILS_GLOBALCONFIG_H
#define UTILS_GLOBALCONFIG_H 1

#include <utils/guard.h>
#include <utils/kvfile.h>

#include <string>

namespace tmssim {

  class GlobalConfig : public KvFile {
  public:

    static int init(std::string path);
    static const GlobalConfig* instance();

    DECLARE_GUARD(GlobalConfig);
    
  private:

    GlobalConfig(std::string path);
    GlobalConfig(GlobalConfig& rhs) = delete;

    static GlobalConfig* _instance;
  };

} // NS tmssim

#endif // !UTILS_GLOBALCONFIG_H

