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

#ifndef ALIBABACLOUD_EMR_MODEL_TAGRESOURCESREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_TAGRESOURCESREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT TagResourcesRequest : public RpcServiceRequest
			{

			public:
				TagResourcesRequest();
				~TagResourcesRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				Array getTags()const;
				void setTags(const Array& tags);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				Array getResourceIds()const;
				void setResourceIds(const Array& resourceIds);

            private:
				std::string clientToken_;
				std::string regionId_;
				std::string resourceType_;
				Array tags_;
				std::string systemDebug_;
				Array resourceIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_TAGRESOURCESREQUEST_H_