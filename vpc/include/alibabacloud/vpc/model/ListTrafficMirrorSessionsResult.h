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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORSESSIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORSESSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ListTrafficMirrorSessionsResult : public ServiceResult
			{
			public:
				struct TrafficMirrorSession
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string trafficMirrorTargetId;
					std::string resourceGroupId;
					int virtualNetworkId;
					int priority;
					std::string trafficMirrorSessionBusinessStatus;
					std::vector<std::string> trafficMirrorSourceIds;
					int packetLength;
					bool enabled;
					std::string trafficMirrorSessionId;
					std::string trafficMirrorFilterId;
					std::string trafficMirrorSessionStatus;
					int trafficMirrorSourceTruncateMode;
					std::string creationTime;
					std::string trafficMirrorSessionDescription;
					std::string trafficMirrorSessionName;
					std::vector<TrafficMirrorSession::Tag> tags;
					std::string trafficMirrorTargetType;
				};


				ListTrafficMirrorSessionsResult();
				explicit ListTrafficMirrorSessionsResult(const std::string &payload);
				~ListTrafficMirrorSessionsResult();
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::vector<TrafficMirrorSession> getTrafficMirrorSessions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string nextToken_;
				std::vector<TrafficMirrorSession> trafficMirrorSessions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTTRAFFICMIRRORSESSIONSRESULT_H_