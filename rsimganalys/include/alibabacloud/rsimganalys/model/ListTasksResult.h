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

#ifndef ALIBABACLOUD_RSIMGANALYS_MODEL_LISTTASKSRESULT_H_
#define ALIBABACLOUD_RSIMGANALYS_MODEL_LISTTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rsimganalys/RsimganalysExport.h>

namespace AlibabaCloud
{
	namespace Rsimganalys
	{
		namespace Model
		{
			class ALIBABACLOUD_RSIMGANALYS_EXPORT ListTasksResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Contents
					{
						std::string status;
						int progress;
						long createTime;
						std::string request;
						std::string jobName;
						std::string _namespace;
						int statusCode;
						std::string statusMessage;
						std::string response;
						std::string jobType;
						long lastUpdateTime;
						std::string version;
						std::string userId;
						std::string appkey;
						std::string jobMessage;
						int enableZoneIdentification;
						std::string jobId;
						int publishStatus;
					};
					int pages;
					int pageSize;
					std::vector<Contents> content;
					int total;
					int pageNo;
				};


				ListTasksResult();
				explicit ListTasksResult(const std::string &payload);
				~ListTasksResult();
				Data getData()const;
				std::string getResultMessage()const;
				int getResultCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				Data data_;
				std::string resultMessage_;
				int resultCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RSIMGANALYS_MODEL_LISTTASKSRESULT_H_