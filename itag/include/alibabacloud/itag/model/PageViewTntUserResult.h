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

#ifndef ALIBABACLOUD_ITAG_MODEL_PAGEVIEWTNTUSERRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_PAGEVIEWTNTUSERRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT PageViewTntUserResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ListItem
					{
						std::string email;
						std::string userName;
						std::string tntInstId;
						std::string org;
						std::string accountNo;
						std::string bizNo;
						bool self;
						std::string accountType;
						std::string role;
						std::string supplierId;
						std::string refUserId;
						std::string phone;
						std::string userId;
					};
					long pageNum;
					long pageSize;
					long totalPage;
					long total;
					std::vector<ListItem> list;
				};


				PageViewTntUserResult();
				explicit PageViewTntUserResult(const std::string &payload);
				~PageViewTntUserResult();
				std::string getMsg()const;
				bool getSucc()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				std::string getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				bool succ_;
				std::string errorCode_;
				std::string errInfo_;
				std::string code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_PAGEVIEWTNTUSERRESULT_H_