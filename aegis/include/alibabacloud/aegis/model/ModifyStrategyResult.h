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

#ifndef ALIBABACLOUD_AEGIS_MODEL_MODIFYSTRATEGYRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_MODIFYSTRATEGYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT ModifyStrategyResult : public ServiceResult
			{
			public:
				struct Result
				{
					int strategyId;
				};


				ModifyStrategyResult();
				explicit ModifyStrategyResult(const std::string &payload);
				~ModifyStrategyResult();
				int getTotalCount()const;
				int getHttpStatusCode()const;
				bool getSuccess()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int httpStatusCode_;
				bool success_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_MODIFYSTRATEGYRESULT_H_