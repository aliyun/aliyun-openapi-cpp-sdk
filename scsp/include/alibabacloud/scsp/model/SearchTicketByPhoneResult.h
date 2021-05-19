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

#ifndef ALIBABACLOUD_SCSP_MODEL_SEARCHTICKETBYPHONERESULT_H_
#define ALIBABACLOUD_SCSP_MODEL_SEARCHTICKETBYPHONERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT SearchTicketByPhoneResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string formData;
					long categoryId;
					std::string carbonCopy;
					int priority;
					long creatorId;
					long createTime;
					int creatorType;
					std::string taskStatus;
					long serviceId;
					long memberId;
					long ticketId;
					long modifiedTime;
					int caseStatus;
					std::string memberName;
					std::string fromInfo;
					std::string creatorName;
					long templateId;
				};


				SearchTicketByPhoneResult();
				explicit SearchTicketByPhoneResult(const std::string &payload);
				~SearchTicketByPhoneResult();
				int getOnePageSize()const;
				std::string getMessage()const;
				int getTotalPage()const;
				int getTotalResults()const;
				std::vector<DataItem> getData()const;
				int getPageNo()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int onePageSize_;
				std::string message_;
				int totalPage_;
				int totalResults_;
				std::vector<DataItem> data_;
				int pageNo_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_SEARCHTICKETBYPHONERESULT_H_