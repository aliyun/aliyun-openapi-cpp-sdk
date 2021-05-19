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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETCALLSPERDAYRESULT_H_
#define ALIBABACLOUD_SCSP_MODEL_GETCALLSPERDAYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetCallsPerDayResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct CallsPerdayResponseListItem
					{
						std::string tenantId;
						std::string callOutCnt;
						std::string dataId;
						std::string phoneNum;
						std::string tenantName;
						std::string callInCnt;
						std::string minuteId;
						std::string hourId;
					};
					long totalNum;
					long pageSize;
					std::string pageNo;
					std::vector<CallsPerdayResponseListItem> callsPerdayResponseList;
				};


				GetCallsPerDayResult();
				explicit GetCallsPerDayResult(const std::string &payload);
				~GetCallsPerDayResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				std::string getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				std::string success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETCALLSPERDAYRESULT_H_