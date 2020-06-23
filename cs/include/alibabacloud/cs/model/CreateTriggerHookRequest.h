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

#ifndef ALIBABACLOUD_CS_MODEL_CREATETRIGGERHOOKREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_CREATETRIGGERHOOKREQUEST_H_

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
			class ALIBABACLOUD_CS_EXPORT CreateTriggerHookRequest : public RoaServiceRequest
			{

			public:
				CreateTriggerHookRequest();
				~CreateTriggerHookRequest();

				std::string getCluster_id()const;
				void setCluster_id(const std::string& cluster_id);
				std::string getProject_id()const;
				void setProject_id(const std::string& project_id);
				std::string getTrigger_url()const;
				void setTrigger_url(const std::string& trigger_url);
				std::string getRegion_id()const;
				void setRegion_id(const std::string& region_id);
				std::string getAction()const;
				void setAction(const std::string& action);

            private:
				std::string cluster_id_;
				std::string project_id_;
				std::string trigger_url_;
				std::string region_id_;
				std::string action_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_CREATETRIGGERHOOKREQUEST_H_