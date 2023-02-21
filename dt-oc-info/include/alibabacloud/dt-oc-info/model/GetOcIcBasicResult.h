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

#ifndef ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCICBASICRESULT_H_
#define ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCICBASICRESULT_H_

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
			class ALIBABACLOUD_DT_OC_INFO_EXPORT GetOcIcBasicResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string staffNum;
					std::string licenseNumber;
					std::string entBrief;
					std::string socialCreditCode;
					std::string opFrom;
					std::string regCap;
					std::string checkDate;
					std::string taxNum;
					std::string entNameEng;
					std::string legalName;
					std::string entAddress;
					std::string insuredNum;
					std::string regOrgProvince;
					std::string regOrgCity;
					std::string entStatus;
					std::string formerNames;
					std::string regOrgDistrict;
					std::string recCap;
					std::string entType;
					std::string orgNo;
					std::string esDate;
					std::string opScope;
					std::string opTo;
					std::string entName;
					std::string industryNameLv2;
					std::string regOrg;
					std::string industryNameLv1;
				};


				GetOcIcBasicResult();
				explicit GetOcIcBasicResult(const std::string &payload);
				~GetOcIcBasicResult();
				int getTotalNum()const;
				std::string getMessage()const;
				int getPageNum()const;
				Data getData()const;
				int getPageIndex()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalNum_;
				std::string message_;
				int pageNum_;
				Data data_;
				int pageIndex_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DT_OC_INFO_MODEL_GETOCICBASICRESULT_H_