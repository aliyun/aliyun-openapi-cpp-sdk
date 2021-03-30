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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTLOGSRESULT_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTLOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListLogsResult : public ServiceResult
			{
			public:
				struct Headers
				{
					int xTotalCount;
				};


				ListLogsResult();
				explicit ListLogsResult(const std::string &payload);
				~ListLogsResult();
				std::string getRequestId()const;
				std::string getMessage()const;
				Headers getHeaders()const;
				std::string getCode()const;
				std::vector<std::string> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string message_;
				Headers headers_;
				std::string code_;
				std::vector<std::string> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTLOGSRESULT_H_