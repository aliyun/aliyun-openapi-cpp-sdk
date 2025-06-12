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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_DELETESYNDBRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_DELETESYNDBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/clickhouse/ClickhouseExport.h>

namespace AlibabaCloud
{
	namespace Clickhouse
	{
		namespace Model
		{
			class ALIBABACLOUD_CLICKHOUSE_EXPORT DeleteSyndbResult : public ServiceResult
			{
			public:


				DeleteSyndbResult();
				explicit DeleteSyndbResult(const std::string &payload);
				~DeleteSyndbResult();
				bool getStatus()const;
				std::string getErrorMsg()const;
				long getErrorCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool status_;
				std::string errorMsg_;
				long errorCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_DELETESYNDBRESULT_H_