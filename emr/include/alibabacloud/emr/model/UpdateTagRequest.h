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

#ifndef ALIBABACLOUD_EMR_MODEL_UPDATETAGREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_UPDATETAGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT UpdateTagRequest : public RpcServiceRequest
			{

			public:
				UpdateTagRequest();
				~UpdateTagRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getName()const;
				void setName(const std::string& name);
				long getId()const;
				void setId(long id);
				std::string getCategory()const;
				void setCategory(const std::string& category);

            private:
				long resourceOwnerId_;
				std::string description_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string name_;
				long id_;
				std::string category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_UPDATETAGREQUEST_H_