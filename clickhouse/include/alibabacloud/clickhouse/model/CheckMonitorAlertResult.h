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

#ifndef ALIBABACLOUD_CLICKHOUSE_MODEL_CHECKMONITORALERTRESULT_H_
#define ALIBABACLOUD_CLICKHOUSE_MODEL_CHECKMONITORALERTRESULT_H_

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
			class ALIBABACLOUD_CLICKHOUSE_EXPORT CheckMonitorAlertResult : public ServiceResult
			{
			public:


				CheckMonitorAlertResult();
				explicit CheckMonitorAlertResult(const std::string &payload);
				~CheckMonitorAlertResult();
				std::string getState()const;
				std::string get_Parameter()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string state_;
				std::string _parameter_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLICKHOUSE_MODEL_CHECKMONITORALERTRESULT_H_