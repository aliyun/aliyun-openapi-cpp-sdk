/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGDEVICEINFORESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGDEVICEINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeSAGDeviceInfoResult : public ServiceResult
			{
			public:


				DescribeSAGDeviceInfoResult();
				explicit DescribeSAGDeviceInfoResult(const std::string &payload);
				~DescribeSAGDeviceInfoResult();
				std::string getServiceIP()const;
				std::string getControllerState()const;
				std::string getSynStatus()const;
				std::string getSmartAGType()const;
				std::string getVersion()const;
				std::string getVpnState()const;
				std::string getStartupTime()const;
				std::string getResettableStatus()const;
				std::string getLastConnectedControllerTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string serviceIP_;
				std::string controllerState_;
				std::string synStatus_;
				std::string smartAGType_;
				std::string version_;
				std::string vpnState_;
				std::string startupTime_;
				std::string resettableStatus_;
				std::string lastConnectedControllerTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBESAGDEVICEINFORESULT_H_