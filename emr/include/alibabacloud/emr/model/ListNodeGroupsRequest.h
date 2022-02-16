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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTNODEGROUPSREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTNODEGROUPSREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListNodeGroupsRequest : public RpcServiceRequest
			{

			public:
				ListNodeGroupsRequest();
				~ListNodeGroupsRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				Array getNodeGroupIds()const;
				void setNodeGroupIds(const Array& nodeGroupIds);
				Array getNodeGroupTypes()const;
				void setNodeGroupTypes(const Array& nodeGroupTypes);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				Array getNodeGroupStatuses()const;
				void setNodeGroupStatuses(const Array& nodeGroupStatuses);
				Array getNodeGroupNames()const;
				void setNodeGroupNames(const Array& nodeGroupNames);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				Array getStatuses()const;
				void setStatuses(const Array& statuses);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);

            private:
				std::string clientToken_;
				Array nodeGroupIds_;
				Array nodeGroupTypes_;
				std::string nextToken_;
				std::string regionId_;
				Array nodeGroupStatuses_;
				Array nodeGroupNames_;
				std::string clusterId_;
				int maxResults_;
				Array statuses_;
				std::string systemDebug_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTNODEGROUPSREQUEST_H_