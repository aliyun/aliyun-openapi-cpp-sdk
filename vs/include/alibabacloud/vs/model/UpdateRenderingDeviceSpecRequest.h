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

#ifndef ALIBABACLOUD_VS_MODEL_UPDATERENDERINGDEVICESPECREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_UPDATERENDERINGDEVICESPECREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT UpdateRenderingDeviceSpecRequest : public RpcServiceRequest
			{

			public:
				UpdateRenderingDeviceSpecRequest();
				~UpdateRenderingDeviceSpecRequest();

				std::string getDescription()const;
				void setDescription(const std::string& description);
				bool getEffectiveTime()const;
				void setEffectiveTime(bool effectiveTime);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				long getAutoRenewPeriod()const;
				void setAutoRenewPeriod(long autoRenewPeriod);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getSpecification()const;
				void setSpecification(const std::string& specification);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				bool getAutoRenew()const;
				void setAutoRenew(bool autoRenew);
				std::string getInstanceIds()const;
				void setInstanceIds(const std::string& instanceIds);

            private:
				std::string description_;
				bool effectiveTime_;
				std::string showLog_;
				long autoRenewPeriod_;
				int period_;
				std::string specification_;
				long ownerId_;
				std::string periodUnit_;
				bool autoRenew_;
				std::string instanceIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_UPDATERENDERINGDEVICESPECREQUEST_H_