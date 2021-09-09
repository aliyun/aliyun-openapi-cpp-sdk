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

#ifndef ALIBABACLOUD_COMPANYREG_MODEL_LISTICPAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_COMPANYREG_MODEL_LISTICPAPPLICATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/companyreg/CompanyregExport.h>

namespace AlibabaCloud
{
	namespace Companyreg
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPANYREG_EXPORT ListIcpApplicationsResult : public ServiceResult
			{
			public:
				struct Application
				{
					std::string actionType;
					float orderPrice;
					std::string produceVersion;
					std::string orderId;
					std::string partnerCode;
					std::string intentionBizId;
					std::string legalPersonName;
					std::string companyAddress;
					std::string companyName;
					int applicationType;
					int type;
					std::string version;
					std::string userId;
					int applicationStatus;
					long updateTime;
					std::string companyArea;
					std::string domain;
					bool includeForeignInvestment;
					std::string bizId;
				};


				ListIcpApplicationsResult();
				explicit ListIcpApplicationsResult(const std::string &payload);
				~ListIcpApplicationsResult();
				int getTotalCount()const;
				std::vector<Application> getApplications()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::string getSource()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<Application> applications_;
				int pageSize_;
				int pageNumber_;
				std::string source_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPANYREG_MODEL_LISTICPAPPLICATIONSRESULT_H_