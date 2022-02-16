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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITIESREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITIESREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListScalingActivitiesRequest : public RpcServiceRequest
			{

			public:
				ListScalingActivitiesRequest();
				~ListScalingActivitiesRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getScalingGroupId()const;
				void setScalingGroupId(const std::string& scalingGroupId);
				std::string getHostGroupName()const;
				void setHostGroupName(const std::string& hostGroupName);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getSystemDebug()const;
				void setSystemDebug(const std::string& systemDebug);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string clientToken_;
				std::string scalingGroupId_;
				std::string hostGroupName_;
				std::string nextToken_;
				std::string regionId_;
				std::string clusterId_;
				int maxResults_;
				std::string systemDebug_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSCALINGACTIVITIESREQUEST_H_