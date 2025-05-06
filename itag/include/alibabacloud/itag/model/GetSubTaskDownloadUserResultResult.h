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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETSUBTASKDOWNLOADUSERRESULTRESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETSUBTASKDOWNLOADUSERRESULTRESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT GetSubTaskDownloadUserResultResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ITagSimpleMarkItemDTO
					{
						struct ITagSimpleUserMarkResultDTO
						{
							std::string markResult;
							std::string userMarkResultId;
							std::string questionId;
							std::string version;
							std::string resultType;
							std::string markResultId;
							std::string markTitle;
						};
						int rejectFlag;
						std::string markItemId;
						std::string dataId;
						std::string state;
						std::string dataMeta;
						int mine;
						int abandonFlag;
						int fixedFlag;
						std::vector<ITagSimpleMarkItemDTO::ITagSimpleUserMarkResultDTO> markResultList;
						int weight;
						std::string datasetId;
					};
					std::string subTaskId;
					std::string taskId;
					std::vector<ITagSimpleMarkItemDTO> markItemList;
					std::string userMarkItemListMap;
					std::string workNode;
					std::string userSubTaskMap;
				};


				GetSubTaskDownloadUserResultResult();
				explicit GetSubTaskDownloadUserResultResult(const std::string &payload);
				~GetSubTaskDownloadUserResultResult();
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
#endif // !ALIBABACLOUD_ITAG_MODEL_GETSUBTASKDOWNLOADUSERRESULTRESULT_H_