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

#ifndef ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCTAXILLEGALRESULT_H_
#define ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCTAXILLEGALRESULT_H_

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
			class ALIBABACLOUD_DT_OC_INFO_EXPORT GetOcTaxIllegalResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string illegalTruth;
					std::string financialSex;
					std::string agencyName;
					std::string entAddress;
					std::string publishDate;
					std::string legalName;
					std::string financialName;
					std::string financialCardType;
					std::string agencyEnt;
					std::string lawBasis;
					std::string legalCardType;
					std::string taxpayerNum;
					std::string agencySex;
					std::string financialCardNum;
					std::string legalCardNum;
					std::string orgCode;
					std::string agencyCardType;
					std::string department;
					std::string caseType;
					std::string legalSex;
					std::string agencyCardNum;
					std::string entName;
				};


				GetOcTaxIllegalResult();
				explicit GetOcTaxIllegalResult(const std::string &payload);
				~GetOcTaxIllegalResult();
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
#endif // !ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCTAXILLEGALRESULT_H_