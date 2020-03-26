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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_DESCIRBECOMBINETRADEMARKRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_DESCIRBECOMBINETRADEMARKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT DescirbeCombineTrademarkResult : public ServiceResult
			{
			public:
				struct Trademark
				{
					struct AnnouncementListItem
					{
						std::string annTypeCode;
						std::string annNumber;
						std::string annDate;
						std::string annTypeName;
						std::string imageUrl;
						std::string originalImageUrl;
					};
					struct ProcedureList
					{
						std::string procedureCode;
						std::string procedureStep;
						std::string procedureDate;
						std::string procedureName;
						std::string procedureResult;
					};
					std::string ownerName;
					std::string priorityDate;
					std::vector<Trademark::ProcedureList> procedures;
					std::string image;
					std::string regAnnNumber;
					std::string intlRegDate;
					std::string name;
					std::string lastProcedureStatus;
					std::string classification;
					std::string ownerEnAddress;
					std::string registrationType;
					std::string firstAnnoNumber;
					std::string registrationNumber;
					std::vector<Trademark::AnnouncementListItem> announcementList;
					std::string lawFinalStatus;
					std::string status;
					std::string indexId;
					int onSale;
					std::string agency;
					std::string firstAnnoType;
					std::string ownerAddress;
					std::string preAnnNumber;
					std::string similarGroup;
					std::string ownerEnName;
					std::string regAnnDate;
					std::string applyDate;
					std::string secondAnnoType;
					std::string preAnnDate;
					std::string secondAnnoNumber;
					std::string productDescription;
					std::string subsequentDesignationDate;
					std::string share;
					std::string exclusiveDateLimit;
				};


				DescirbeCombineTrademarkResult();
				explicit DescirbeCombineTrademarkResult(const std::string &payload);
				~DescirbeCombineTrademarkResult();
				int getTotalItemNumber()const;
				bool getPrePage()const;
				int getPageSize()const;
				std::vector<Trademark> getData()const;
				int getCurrentPageNumber()const;
				int getTotalPageNumber()const;
				bool getNextPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalItemNumber_;
				bool prePage_;
				int pageSize_;
				std::vector<Trademark> data_;
				int currentPageNumber_;
				int totalPageNumber_;
				bool nextPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_DESCIRBECOMBINETRADEMARKRESULT_H_