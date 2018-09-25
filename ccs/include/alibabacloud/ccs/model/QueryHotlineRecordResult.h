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

#ifndef ALIBABACLOUD_CCS_MODEL_QUERYHOTLINERECORDRESULT_H_
#define ALIBABACLOUD_CCS_MODEL_QUERYHOTLINERECORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccs/CcsExport.h>

namespace AlibabaCloud
{
	namespace Ccs
	{
		namespace Model
		{
			class ALIBABACLOUD_CCS_EXPORT QueryHotlineRecordResult : public ServiceResult
			{
			public:
				struct HotlineRecord
				{
					std::string groupName;
					std::string status;
					std::string visitorId;
					std::string outboundTaskId;
					std::string categories;
					long talkDuration;
					std::string visitorPhone;
					std::string createTime;
					std::string satisfaction;
					std::string callType;
					std::string visitorProvince;
					std::string ccsInstanceId;
					std::string groupId;
					std::string finishTime;
					std::string hangupType;
					std::string id;
					std::string agentId;
					std::string agentName;
					std::string memo;
				};


				QueryHotlineRecordResult();
				explicit QueryHotlineRecordResult(const std::string &payload);
				~QueryHotlineRecordResult();
				int getTotalCount()const;
				int getPageNum()const;
				int getPageSize()const;
				std::vector<HotlineRecord> getRecords()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageNum_;
				int pageSize_;
				std::vector<HotlineRecord> records_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCS_MODEL_QUERYHOTLINERECORDRESULT_H_