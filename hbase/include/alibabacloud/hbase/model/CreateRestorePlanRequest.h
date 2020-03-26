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

#ifndef ALIBABACLOUD_HBASE_MODEL_CREATERESTOREPLANREQUEST_H_
#define ALIBABACLOUD_HBASE_MODEL_CREATERESTOREPLANREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hbase/HBaseExport.h>

namespace AlibabaCloud
{
	namespace HBase
	{
		namespace Model
		{
			class ALIBABACLOUD_HBASE_EXPORT CreateRestorePlanRequest : public RpcServiceRequest
			{

			public:
				CreateRestorePlanRequest();
				~CreateRestorePlanRequest();

				std::string getRestoreToDate()const;
				void setRestoreToDate(const std::string& restoreToDate);
				std::string getTables()const;
				void setTables(const std::string& tables);
				bool getRestoreByCopy()const;
				void setRestoreByCopy(bool restoreByCopy);
				bool getRestoreAllTable()const;
				void setRestoreAllTable(bool restoreAllTable);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getTargetClusterId()const;
				void setTargetClusterId(const std::string& targetClusterId);

            private:
				std::string restoreToDate_;
				std::string tables_;
				bool restoreByCopy_;
				bool restoreAllTable_;
				std::string clusterId_;
				std::string targetClusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HBASE_MODEL_CREATERESTOREPLANREQUEST_H_