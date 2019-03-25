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

#ifndef ALIBABACLOUD_SAS_API_MODEL_DESCRIBEPERDATEDATARESULT_H_
#define ALIBABACLOUD_SAS_API_MODEL_DESCRIBEPERDATEDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas-api/Sas_apiExport.h>

namespace AlibabaCloud
{
	namespace Sas_api
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_API_EXPORT DescribePerDateDataResult : public ServiceResult
			{
			public:
				struct DataViewItem
				{
					long isOpenCommonPort7d;
					long isHiJack1d;
					long hitRate;
					long isC230d;
					long isHiJack7d;
					std::string dataTime;
					long isNetAttack30d;
					long isBotnet30d;
					long callTimes;
					long isCheatFlow1d;
					long isCheatFlow30d;
					long isBlackCampaign7d;
					long isVirtualOperator;
					long isCheatFlow7d;
					long isOpenCommonPort1d;
					long isBlackCampaign1d;
					long isC27d;
					long isNetAttack7d;
					long isBlackCampaign30d;
					long isBlackPhone;
					long isNetAttack1d;
					long isC21d;
					long isProxy7d;
					long isProxy1d;
					long isBotnet7d;
					long isOpenCommonPort30d;
					long isProxy30d;
					long isBotnet1d;
					long isGreyPhone;
					long isHiJack30d;
					long totalHit;
				};


				DescribePerDateDataResult();
				explicit DescribePerDateDataResult(const std::string &payload);
				~DescribePerDateDataResult();
				std::vector<DataViewItem> getDataView()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataViewItem> dataView_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_API_MODEL_DESCRIBEPERDATEDATARESULT_H_