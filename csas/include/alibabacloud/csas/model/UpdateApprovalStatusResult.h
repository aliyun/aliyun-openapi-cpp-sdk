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

#ifndef ALIBABACLOUD_CSAS_MODEL_UPDATEAPPROVALSTATUSRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_UPDATEAPPROVALSTATUSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT UpdateApprovalStatusResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ApprovalProgressesItem
					{
						struct OperatorsItem
						{
							std::string username;
							std::string saseUserId;
						};
						std::string status;
						std::string comment;
						std::vector<ApprovalProgressesItem::OperatorsItem> operators;
						std::string action;
						std::string executor;
						long timestamp;
					};
					std::string status;
					std::string policyType;
					std::string processName;
					std::vector<Data::ApprovalProgressesItem> approvalProgresses;
					std::string createTime;
					std::string approvalId;
					long endTimestamp;
					std::string approvalDetail;
					std::string schemaContent;
					std::string reason;
					std::string schemaId;
					std::string processId;
					std::string creatorUserId;
					std::string schemaName;
					std::string creatorDevTag;
				};


				UpdateApprovalStatusResult();
				explicit UpdateApprovalStatusResult(const std::string &payload);
				~UpdateApprovalStatusResult();
				std::vector<Data> getApproval()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Data> approval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_UPDATEAPPROVALSTATUSRESULT_H_