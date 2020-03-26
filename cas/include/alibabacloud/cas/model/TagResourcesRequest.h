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

#ifndef ALIBABACLOUD_CAS_MODEL_TAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_TAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT TagResourcesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				TagResourcesRequest();
				~TagResourcesRequest();

				std::string getTagOwnerUid()const;
				void setTagOwnerUid(const std::string& tagOwnerUid);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getScope()const;
				void setScope(const std::string& scope);
				std::string getTagOwnerBid()const;
				void setTagOwnerBid(const std::string& tagOwnerBid);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::vector<std::string> getResourceId()const;
				void setResourceId(const std::vector<std::string>& resourceId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);

            private:
				std::string tagOwnerUid_;
				std::string resourceGroupId_;
				std::string sourceIp_;
				std::string regionId_;
				std::string scope_;
				std::string tagOwnerBid_;
				std::vector<Tag> tag_;
				std::vector<std::string> resourceId_;
				std::string resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_TAGRESOURCESREQUEST_H_