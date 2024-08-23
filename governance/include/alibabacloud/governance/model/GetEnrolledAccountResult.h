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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_GETENROLLEDACCOUNTRESULT_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_GETENROLLEDACCOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/governance/GovernanceExport.h>

namespace AlibabaCloud
{
	namespace Governance
	{
		namespace Model
		{
			class ALIBABACLOUD_GOVERNANCE_EXPORT GetEnrolledAccountResult : public ServiceResult
			{
			public:
				struct ErrorInfo
				{
					std::string message;
					std::string recommend;
					std::string requestId;
					std::string code;
				};
				struct Inputs
				{
					struct BaselineItem2
					{
						std::string version;
						std::string config;
						bool skip;
						std::string name;
					};
					std::vector<BaselineItem2> baselineItems1;
					std::string displayName;
					std::string folderId;
					long accountUid;
					std::string accountNamePrefix;
					long payerAccountUid;
				};
				struct BaselineItem
				{
					std::string version;
					std::string config;
					bool skip;
					std::string name;
				};
				struct Progres
				{
					std::string status;
					std::string name;
				};


				GetEnrolledAccountResult();
				explicit GetEnrolledAccountResult(const std::string &payload);
				~GetEnrolledAccountResult();
				std::string getBaselineId()const;
				std::string getStatus()const;
				std::vector<Progres> getProgress()const;
				bool getInitialized()const;
				long getMasterAccountUid()const;
				ErrorInfo getErrorInfo()const;
				std::string getCreateTime()const;
				std::string getFolderId()const;
				long getAccountUid()const;
				std::vector<BaselineItem> getBaselineItems()const;
				std::string getDisplayName()const;
				std::string getUpdateTime()const;
				Inputs getInputs()const;
				long getPayerAccountUid()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string baselineId_;
				std::string status_;
				std::vector<Progres> progress_;
				bool initialized_;
				long masterAccountUid_;
				ErrorInfo errorInfo_;
				std::string createTime_;
				std::string folderId_;
				long accountUid_;
				std::vector<BaselineItem> baselineItems_;
				std::string displayName_;
				std::string updateTime_;
				Inputs inputs_;
				long payerAccountUid_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_GETENROLLEDACCOUNTRESULT_H_