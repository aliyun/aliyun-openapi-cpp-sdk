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

#ifndef ALIBABACLOUD_CS_MODEL_UPGRADECLUSTERREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_UPGRADECLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT UpgradeClusterRequest : public RoaServiceRequest
			{

			public:
				UpgradeClusterRequest();
				~UpgradeClusterRequest();

				std::string getComponent_name()const;
				void setComponent_name(const std::string& component_name);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getVersion()const;
				void setVersion(const std::string& version);
				std::string getNext_version()const;
				void setNext_version(const std::string& next_version);

            private:
				std::string component_name_;
				std::string clusterId_;
				std::string version_;
				std::string next_version_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_UPGRADECLUSTERREQUEST_H_