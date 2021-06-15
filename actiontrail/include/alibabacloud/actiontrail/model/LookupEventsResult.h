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

#ifndef ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSRESULT_H_
#define ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/actiontrail/ActiontrailExport.h>

namespace AlibabaCloud
{
	namespace Actiontrail
	{
		namespace Model
		{
			class ALIBABACLOUD_ACTIONTRAIL_EXPORT LookupEventsResult : public ServiceResult
			{
			public:


				LookupEventsResult();
				explicit LookupEventsResult(const std::string &payload);
				~LookupEventsResult();
				std::string getEndTime()const;
				std::string getNextToken()const;
				std::vector<std::string> getEvents()const;
				std::string getStartTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string nextToken_;
				std::vector<std::string> events_;
				std::string startTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACTIONTRAIL_MODEL_LOOKUPEVENTSRESULT_H_