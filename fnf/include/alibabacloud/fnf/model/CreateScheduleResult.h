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

#ifndef ALIBABACLOUD_FNF_MODEL_CREATESCHEDULERESULT_H_
#define ALIBABACLOUD_FNF_MODEL_CREATESCHEDULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/fnf/FnfExport.h>

namespace AlibabaCloud
{
	namespace Fnf
	{
		namespace Model
		{
			class ALIBABACLOUD_FNF_EXPORT CreateScheduleResult : public ServiceResult
			{
			public:


				CreateScheduleResult();
				explicit CreateScheduleResult(const std::string &payload);
				~CreateScheduleResult();
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getLastModifiedTime()const;
				bool getEnable()const;
				std::string getPayload()const;
				std::string getCronExpression()const;
				std::string getScheduleId()const;
				std::string getScheduleName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string createdTime_;
				std::string lastModifiedTime_;
				bool enable_;
				std::string payload_;
				std::string cronExpression_;
				std::string scheduleId_;
				std::string scheduleName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FNF_MODEL_CREATESCHEDULERESULT_H_