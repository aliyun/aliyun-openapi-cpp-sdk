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

#ifndef ALIBABACLOUD_ITAG_MODEL_LISTFINISHEDSUBUSERTASKRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_LISTFINISHEDSUBUSERTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/itag/ItagExport.h>

namespace AlibabaCloud
{
	namespace Itag
	{
		namespace Model
		{
			class ALIBABACLOUD_ITAG_EXPORT ListFinishedSubUserTaskResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ListItem
					{
						struct Creator
						{
							std::string supplierId;
							std::string userName;
							std::string email;
							std::string accountNo;
							std::string supplierName;
							std::string userId;
							std::string pamNo;
							std::string accountType;
						};
						struct Modifier
						{
							std::string supplierId;
							std::string userName;
							std::string email;
							std::string accountNo;
							std::string supplierName;
							std::string userId;
							std::string pamNo;
							std::string accountType;
						};
						std::string subTaskId;
						std::string workTime;
						std::string gmtCreate;
						std::string taskId;
						std::string taskName;
						std::string state;
						std::string workNode;
						std::string userSubTaskId;
						std::string gmtModified;
						Creator creator;
						Modifier modifier;
					};
					int pageNum;
					int pageSize;
					long totalPage;
					long total;
					std::vector<ListItem> list;
				};


				ListFinishedSubUserTaskResult();
				explicit ListFinishedSubUserTaskResult(const std::string &payload);
				~ListFinishedSubUserTaskResult();
				std::string getMsg()const;
				long getRt()const;
				bool getSucc()const;
				std::string getHost()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				int getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				long rt_;
				bool succ_;
				std::string host_;
				std::string errorCode_;
				std::string errInfo_;
				int code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_LISTFINISHEDSUBUSERTASKRESULT_H_