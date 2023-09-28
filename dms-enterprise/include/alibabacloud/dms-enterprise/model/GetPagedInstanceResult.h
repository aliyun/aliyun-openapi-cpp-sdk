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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPAGEDINSTANCERESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPAGEDINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetPagedInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct InstanceItem
					{
						std::string msg;
						long status;
						long triggerType;
						long historyDagId;
						std::string endTime;
						long checkStatus;
						std::string gmtModified;
						long dagId;
						std::string _delete;
						std::string gmtCreate;
						std::string tenantId;
						std::string lastRunningContext;
						std::string version;
						long taskType;
						long id;
						std::string businessTime;
					};
					std::vector<InstanceItem> instance;
				};


				GetPagedInstanceResult();
				explicit GetPagedInstanceResult(const std::string &payload);
				~GetPagedInstanceResult();
				long getPageSize()const;
				long getTotal()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				long getPageIndex()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				long total_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				long pageIndex_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETPAGEDINSTANCERESULT_H_