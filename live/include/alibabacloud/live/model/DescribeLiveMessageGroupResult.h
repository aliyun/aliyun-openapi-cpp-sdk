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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEMESSAGEGROUPRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEMESSAGEGROUPRESULT_H_

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
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveMessageGroupResult : public ServiceResult
			{
			public:


				DescribeLiveMessageGroupResult();
				explicit DescribeLiveMessageGroupResult(const std::string &payload);
				~DescribeLiveMessageGroupResult();
				std::string getGroupName()const;
				long getDeletatime()const;
				bool getSuperLargeGroup()const;
				long getTotalTimes()const;
				std::string getMsgAmount()const;
				std::string getGroupInfo()const;
				std::string getCreatorId()const;
				long getOnlineUserCounts()const;
				std::string getGroupId()const;
				std::vector<std::string> getAdminList()const;
				bool get_Delete()const;
				long getCreatetime()const;
				std::string getDeletor()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string groupName_;
				long deletatime_;
				bool superLargeGroup_;
				long totalTimes_;
				std::string msgAmount_;
				std::string groupInfo_;
				std::string creatorId_;
				long onlineUserCounts_;
				std::string groupId_;
				std::vector<std::string> adminList_;
				bool _delete_;
				long createtime_;
				std::string deletor_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEMESSAGEGROUPRESULT_H_