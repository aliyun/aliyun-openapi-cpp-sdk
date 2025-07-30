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

#ifndef ALIBABACLOUD_CIOMARKETPOP_MODEL_GETEVERYONESELLSFORMLISTRESULT_H_
#define ALIBABACLOUD_CIOMARKETPOP_MODEL_GETEVERYONESELLSFORMLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ciomarketpop/CioMarketPopExport.h>

namespace AlibabaCloud
{
	namespace CioMarketPop
	{
		namespace Model
		{
			class ALIBABACLOUD_CIOMARKETPOP_EXPORT GetEveryOneSellsFormListResult : public ServiceResult
			{
			public:


				GetEveryOneSellsFormListResult();
				explicit GetEveryOneSellsFormListResult(const std::string &payload);
				~GetEveryOneSellsFormListResult();

			protected:
				void parse(const std::string &payload);
			private:

			};
		}
	}
}
#endif // !ALIBABACLOUD_CIOMARKETPOP_MODEL_GETEVERYONESELLSFORMLISTRESULT_H_