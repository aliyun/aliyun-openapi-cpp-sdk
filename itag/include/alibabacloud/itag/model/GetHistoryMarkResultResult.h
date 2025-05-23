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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETHISTORYMARKRESULTRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETHISTORYMARKRESULTRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT GetHistoryMarkResultResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct UserMarkResult
					{
						struct Progress
						{
							int finished;
							int total;
						};
						std::string markTime;
						Progress progress;
						std::string markResult;
						std::string questionId;
						std::string version;
						std::string resultType;
						std::string markResultId;
						std::string markTitle;
					};
					std::string accountNo;
					std::string workNode;
					std::vector<ResultItem::UserMarkResult> userMarkResults;
					std::string name;
				};


				GetHistoryMarkResultResult();
				explicit GetHistoryMarkResultResult(const std::string &payload);
				~GetHistoryMarkResultResult();
				std::string getMsg()const;
				long getRt()const;
				bool getSucc()const;
				std::string getHost()const;
				std::string getErrorCode()const;
				std::string getErrInfo()const;
				int getCode()const;
				std::vector<ResultItem> getResult()const;

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
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_GETHISTORYMARKRESULTRESULT_H_