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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTNODESREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTNODESREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListNodesRequest : public RpcServiceRequest
			{

			public:
				ListNodesRequest();
				~ListNodesRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				Array getNodeNames()const;
				void setNodeNames(const Array& nodeNames);
				std::string getPublicIp()const;
				void setPublicIp(const std::string& publicIp);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getPrivateIp()const;
				void setPrivateIp(const std::string& privateIp);
				Array getNodeStatuses()const;
				void setNodeStatuses(const Array& nodeStatuses);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getNodeGroupId()const;
				void setNodeGroupId(const std::string& nodeGroupId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				Array getNodeIds()const;
				void setNodeIds(const Array& nodeIds);

            private:
				std::string clientToken_;
				Array nodeNames_;
				std::string publicIp_;
				std::string nextToken_;
				std::string regionId_;
				std::string privateIp_;
				Array nodeStatuses_;
				std::string clusterId_;
				std::string nodeGroupId_;
				int maxResults_;
				std::string systemDebug_;
				Array nodeIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTNODESREQUEST_H_