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

#ifndef ALIBABACLOUD_MNS_OPEN_MODEL_SETTOPICATTRIBUTESRESULT_H_
#define ALIBABACLOUD_MNS_OPEN_MODEL_SETTOPICATTRIBUTESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mns-open/Mns_openExport.h>

namespace AlibabaCloud
{
	namespace Mns_open
	{
		namespace Model
		{
			class ALIBABACLOUD_MNS_OPEN_EXPORT SetTopicAttributesResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string message;
					long code;
					bool success;
				};


				SetTopicAttributesResult();
				explicit SetTopicAttributesResult(const std::string &payload);
				~SetTopicAttributesResult();
				std::string getStatus()const;
				std::string getMessage()const;
				Data getData()const;
				long getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string message_;
				Data data_;
				long code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MNS_OPEN_MODEL_SETTOPICATTRIBUTESRESULT_H_