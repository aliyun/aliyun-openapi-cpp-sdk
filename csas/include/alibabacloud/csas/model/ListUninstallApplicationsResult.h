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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTUNINSTALLAPPLICATIONSRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTUNINSTALLAPPLICATIONSRESULT_H_

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
			class ALIBABACLOUD_CSAS_EXPORT ListUninstallApplicationsResult : public ServiceResult
			{
			public:
				struct DataList
				{
					std::string status;
					bool isUninstall;
					std::string devType;
					std::string createTime;
					std::string hostname;
					std::string devTag;
					std::string saseUserId;
					std::string mac;
					std::string reason;
					std::string department;
					std::string username;
					std::string idpName;
					std::string applicationId;
				};


				ListUninstallApplicationsResult();
				explicit ListUninstallApplicationsResult(const std::string &payload);
				~ListUninstallApplicationsResult();
				long getTotalNum()const;
				std::vector<DataList> getApplications()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalNum_;
				std::vector<DataList> applications_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTUNINSTALLAPPLICATIONSRESULT_H_