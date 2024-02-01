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

#ifndef ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTSTREAMINGRESULT_H_
#define ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTSTREAMINGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eventbridge/EventbridgeExport.h>

namespace AlibabaCloud
{
	namespace Eventbridge
	{
		namespace Model
		{
			class ALIBABACLOUD_EVENTBRIDGE_EXPORT CreateEventStreamingResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string eventStreamingARN;
				};


				CreateEventStreamingResult();
				explicit CreateEventStreamingResult(const std::string &payload);
				~CreateEventStreamingResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EVENTBRIDGE_MODEL_CREATEEVENTSTREAMINGRESULT_H_