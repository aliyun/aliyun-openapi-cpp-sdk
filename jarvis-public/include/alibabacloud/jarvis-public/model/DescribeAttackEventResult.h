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

#ifndef ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEATTACKEVENTRESULT_H_
#define ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEATTACKEVENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/jarvis-public/Jarvis_publicExport.h>

namespace AlibabaCloud
{
	namespace Jarvis_public
	{
		namespace Model
		{
			class ALIBABACLOUD_JARVIS_PUBLIC_EXPORT DescribeAttackEventResult : public ServiceResult
			{
			public:
				struct Event
				{
					std::string gmtCreate;
					std::string sourceIp;
					std::string vmIp;
					std::string gmtModified;
					int gmtCreateStamp;
					std::string attackType;
					std::string url;
				};


				DescribeAttackEventResult();
				explicit DescribeAttackEventResult(const std::string &payload);
				~DescribeAttackEventResult();
				std::vector<Event> getEventList()const;
				std::string getModule()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Event> eventList_;
				std::string module_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_JARVIS_PUBLIC_MODEL_DESCRIBEATTACKEVENTRESULT_H_