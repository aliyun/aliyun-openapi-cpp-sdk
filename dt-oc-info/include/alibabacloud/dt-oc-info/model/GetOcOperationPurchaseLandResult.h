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

#ifndef ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCOPERATIONPURCHASELANDRESULT_H_
#define ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCOPERATIONPURCHASELANDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dt-oc-info/Dt_oc_infoExport.h>

namespace AlibabaCloud
{
	namespace Dt_oc_info
	{
		namespace Model
		{
			class ALIBABACLOUD_DT_OC_INFO_EXPORT GetOcOperationPurchaseLandResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string landUse;
					std::string promiseStartDate;
					std::string projectName;
					std::string landSource;
					std::string promiseEndDate;
					std::string landLevel;
					std::string signingMode;
					std::string releaseDate;
					std::string useYear;
					std::string promiseDeliveryDate;
					std::string volumeFractionUpperBound;
					std::string industry;
					std::string area;
					std::string department;
					std::string regionName;
					std::string price;
					std::string electronicNo;
					std::string entName;
					std::string volumeFractionLowerBound;
					std::string location;
				};


				GetOcOperationPurchaseLandResult();
				explicit GetOcOperationPurchaseLandResult(const std::string &payload);
				~GetOcOperationPurchaseLandResult();
				int getTotalNum()const;
				std::string getMessage()const;
				int getPageNum()const;
				std::vector<DataItem> getData()const;
				int getPageIndex()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalNum_;
				std::string message_;
				int pageNum_;
				std::vector<DataItem> data_;
				int pageIndex_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCOPERATIONPURCHASELANDRESULT_H_