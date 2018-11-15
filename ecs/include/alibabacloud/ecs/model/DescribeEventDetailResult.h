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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEEVENTDETAILRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEEVENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeEventDetailResult : public ServiceResult
			{
			public:


				DescribeEventDetailResult();
				explicit DescribeEventDetailResult(const std::string &payload);
				~DescribeEventDetailResult();
				std::string getStatus()const;
				std::string getLimitTime()const;
				std::string getEventCategory()const;
				std::string getEndTime()const;
				std::string getEventType()const;
				std::string getStartTime()const;
				std::string getEffectTime()const;
				std::string getMark()const;
				std::string getPlanTime()const;
				std::string getResourceId()const;
				std::string getSupportModify()const;
				std::string getEventId()const;
				std::string getExpireTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string limitTime_;
				std::string eventCategory_;
				std::string endTime_;
				std::string eventType_;
				std::string startTime_;
				std::string effectTime_;
				std::string mark_;
				std::string planTime_;
				std::string resourceId_;
				std::string supportModify_;
				std::string eventId_;
				std::string expireTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEEVENTDETAILRESULT_H_