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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_UPGRADEINSTANCEREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_UPGRADEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics-open/Openanalytics_openExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT UpgradeInstanceRequest : public RpcServiceRequest
			{

			public:
				UpgradeInstanceRequest();
				~UpgradeInstanceRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::string getComponent()const;
				void setComponent(const std::string& component);

            private:
				std::string regionId_;
				std::string instanceId_;
				std::string chargeType_;
				std::string instanceType_;
				std::string component_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_MODEL_UPGRADEINSTANCEREQUEST_H_