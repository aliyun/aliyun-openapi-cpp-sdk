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

#ifndef ALIBABACLOUD_CS_MODEL_ATTACHINSTANCESREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_ATTACHINSTANCESREQUEST_H_

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
			class ALIBABACLOUD_CS_EXPORT AttachInstancesRequest : public RoaServiceRequest
			{

			public:
				AttachInstancesRequest();
				~AttachInstancesRequest();

				std::string getPassword()const;
				void setPassword(const std::string& password);
				bool getKeep_instance_name()const;
				void setKeep_instance_name(bool keep_instance_name);
				std::string getKey_pair()const;
				void setKey_pair(const std::string& key_pair);
				std::string getCpu_policy()const;
				void setCpu_policy(const std::string& cpu_policy);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				bool getFormat_disk()const;
				void setFormat_disk(bool format_disk);

            private:
				std::string password_;
				bool keep_instance_name_;
				std::string key_pair_;
				std::string cpu_policy_;
				std::string clusterId_;
				bool format_disk_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_ATTACHINSTANCESREQUEST_H_