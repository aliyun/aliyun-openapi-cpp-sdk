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

#ifndef ALIBABACLOUD_CS_MODEL_CREATEKUBERNETESTRIGGERREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_CREATEKUBERNETESTRIGGERREQUEST_H_

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
			class ALIBABACLOUD_CS_EXPORT CreateKubernetesTriggerRequest : public RoaServiceRequest
			{

			public:
				CreateKubernetesTriggerRequest();
				~CreateKubernetesTriggerRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getAction()const;
				void setAction(const std::string& action);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);

            private:
				std::string regionId_;
				std::string action_;
				std::string clusterId_;
				std::string type_;
				std::string projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_CREATEKUBERNETESTRIGGERREQUEST_H_