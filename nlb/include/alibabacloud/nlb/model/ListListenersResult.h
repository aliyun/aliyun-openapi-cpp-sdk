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

#ifndef ALIBABACLOUD_NLB_MODEL_LISTLISTENERSRESULT_H_
#define ALIBABACLOUD_NLB_MODEL_LISTLISTENERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nlb/NlbExport.h>

namespace AlibabaCloud
{
	namespace Nlb
	{
		namespace Model
		{
			class ALIBABACLOUD_NLB_EXPORT ListListenersResult : public ServiceResult
			{
			public:
				struct ListenerInfo
				{
					struct TagModels
					{
						std::string value;
						std::string key;
					};
					bool caEnabled;
					int listenerPort;
					std::string startPort;
					int cps;
					std::string serverGroupId;
					int idleTimeout;
					std::string loadBalancerId;
					std::string listenerProtocol;
					int mss;
					std::string securityPolicyId;
					std::string listenerStatus;
					std::string listenerDescription;
					std::string alpnPolicy;
					std::vector<std::string> caCertificateIds;
					std::string endPort;
					bool proxyProtocolEnabled;
					std::vector<std::string> certificateIds;
					bool secSensorEnabled;
					std::string regionId;
					std::vector<ListenerInfo::TagModels> tags;
					std::string listenerId;
					bool alpnEnabled;
				};


				ListListenersResult();
				explicit ListListenersResult(const std::string &payload);
				~ListListenersResult();
				std::vector<ListenerInfo> getListeners()const;
				int getTotalCount()const;
				std::string getMessage()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				int getHttpStatusCode()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ListenerInfo> listeners_;
				int totalCount_;
				std::string message_;
				std::string nextToken_;
				int maxResults_;
				int httpStatusCode_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NLB_MODEL_LISTLISTENERSRESULT_H_