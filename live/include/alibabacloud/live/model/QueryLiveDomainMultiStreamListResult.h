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

#ifndef ALIBABACLOUD_LIVE_MODEL_QUERYLIVEDOMAINMULTISTREAMLISTRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_QUERYLIVEDOMAINMULTISTREAMLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT QueryLiveDomainMultiStreamListResult : public ServiceResult
			{
			public:
				struct OnlineStreamsItem
				{
					struct UpstreamListItem
					{
						std::string upstreamIp;
						std::string upstreamSequence;
						std::string upstreamTime;
						bool masterFlag;
					};
					struct ChangeLogsItem
					{
						std::string upstreamIp;
						std::string changeTime;
						std::string masterUpstream;
						std::string upstreamSequence;
						std::string changeReason;
					};
					std::string streamName;
					std::string optimalMode;
					std::vector<OnlineStreamsItem::ChangeLogsItem> changeLogs;
					std::vector<OnlineStreamsItem::UpstreamListItem> upstreamList;
					std::string domain;
					std::string appName;
				};


				QueryLiveDomainMultiStreamListResult();
				explicit QueryLiveDomainMultiStreamListResult(const std::string &payload);
				~QueryLiveDomainMultiStreamListResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<OnlineStreamsItem> getOnlineStreams()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<OnlineStreamsItem> onlineStreams_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_QUERYLIVEDOMAINMULTISTREAMLISTRESULT_H_