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

#ifndef ALIBABACLOUD_GA_MODEL_LISTLISTENERSRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTLISTENERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT ListListenersResult : public ServiceResult
			{
			public:
				struct ListenersItem
				{
					struct XForwardedForConfig
					{
						bool xForwardedForGaApEnabled;
						bool xForwardedForProtoEnabled;
						bool xRealIpEnabled;
						bool xForwardedForPortEnabled;
						bool xForwardedForGaIdEnabled;
					};
					struct Certificate
					{
						std::string type;
						std::string id;
					};
					struct BackendPort
					{
						std::string fromPort;
						std::string toPort;
					};
					struct PortRangesItem
					{
						int fromPort;
						int toPort;
					};
					std::string description;
					std::vector<ListenersItem::BackendPort> backendPorts;
					std::vector<ListenersItem::PortRangesItem> portRanges;
					long createTime;
					bool proxyProtocol;
					std::vector<ListenersItem::Certificate> certificates;
					std::string name;
					std::string securityPolicyId;
					std::string type;
					std::string state;
					XForwardedForConfig xForwardedForConfig;
					std::string protocol;
					std::string acceleratorId;
					std::string listenerId;
					std::string clientAffinity;
				};


				ListListenersResult();
				explicit ListListenersResult(const std::string &payload);
				~ListListenersResult();
				std::vector<ListenersItem> getListeners()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ListenersItem> listeners_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTLISTENERSRESULT_H_