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

#ifndef ALIBABACLOUD_DBS_MODEL_DESCRIBESANDBOXFROMRDSRESULT_H_
#define ALIBABACLOUD_DBS_MODEL_DESCRIBESANDBOXFROMRDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbs/DbsExport.h>

namespace AlibabaCloud
{
	namespace Dbs
	{
		namespace Model
		{
			class ALIBABACLOUD_DBS_EXPORT DescribeSandboxFromRDSResult : public ServiceResult
			{
			public:


				DescribeSandboxFromRDSResult();
				explicit DescribeSandboxFromRDSResult(const std::string &payload);
				~DescribeSandboxFromRDSResult();
				std::string getBackupPlanName()const;
				std::string getDbsInstanceId()const;
				std::string getSourceId()const;
				bool getSupportSandbox()const;
				long getSandboxRecoverEndTime()const;
				std::string getErrMessage()const;
				bool getSuccess()const;
				std::string getErrCode()const;
				bool getEnabledSandbox()const;
				long getSandboxRecoverStartTime()const;
				int getHttpStatusCode()const;
				std::string getBackupLog()const;
				int getSandboxInstanceCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string backupPlanName_;
				std::string dbsInstanceId_;
				std::string sourceId_;
				bool supportSandbox_;
				long sandboxRecoverEndTime_;
				std::string errMessage_;
				bool success_;
				std::string errCode_;
				bool enabledSandbox_;
				long sandboxRecoverStartTime_;
				int httpStatusCode_;
				std::string backupLog_;
				int sandboxInstanceCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBS_MODEL_DESCRIBESANDBOXFROMRDSRESULT_H_