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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTRULESREQUEST_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTRULESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListRulesRequest : public RoaServiceRequest
			{

			public:
				ListRulesRequest();
				~ListRulesRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				int getSize()const;
				void setSize(int size);
				std::string getRuleType()const;
				void setRuleType(const std::string& ruleType);
				std::string getSceneId()const;
				void setSceneId(const std::string& sceneId);
				long getEndTime()const;
				void setEndTime(long endTime);
				int getPage()const;
				void setPage(int page);
				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string instanceId_;
				int size_;
				std::string ruleType_;
				std::string sceneId_;
				long endTime_;
				int page_;
				long startTime_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTRULESREQUEST_H_