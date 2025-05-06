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

#ifndef ALIBABACLOUD_ITAG_MODEL_GETUSERMARKITEMINFORESULT_H_
#define ALIBABACLOUD_ITAG_MODEL_GETUSERMARKITEMINFORESULT_H_

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
			class ALIBABACLOUD_ITAG_EXPORT GetUserMarkItemInfoResult : public ServiceResult
			{
			public:
				struct MsgInfo
				{
					std::string msg;
					std::string msgCn;
				};
				struct Result
				{
					struct MarkResultListItem
					{
						struct Progress
						{
							int finished;
							int total;
						};
						std::string markTime;
						Progress progress;
						std::string markResult;
						std::string userMarkResultId;
						std::string questionId;
						std::string version;
						bool isNeedVoteJudge;
						std::string resultType;
						std::string markResultId;
						std::string markTitle;
					};
					struct VoteInfoListItem
					{
						struct MarkResultListItem2
						{
							struct Progress3
							{
								int finished;
								int total;
							};
							std::string markTime;
							std::string markResult;
							Progress3 progress3;
							std::string userMarkResultId;
							std::string questionId;
							std::string version;
							bool isNeedVoteJudge;
							std::string resultType;
							std::string markResultId;
							std::string markTitle;
						};
						std::string userMarkItemId;
						std::string userName;
						std::string userId;
						std::string workFlow;
						bool isAccept;
						std::vector<VoteInfoListItem::MarkResultListItem2> markResultList1;
					};
					std::string subTaskId;
					int rejectFlag;
					bool isVoteEqual;
					std::string abandonRemark;
					std::vector<VoteInfoListItem> voteInfoList;
					int abandonFlag;
					std::string feedbackRemark;
					std::string _operator;
					std::string isConfirmed;
					std::string needConfirm;
					std::vector<MarkResultListItem> markResultList;
					int weight;
					std::string datasetId;
					std::string confirmRange;
					std::string userMarkItemId;
					std::string markItemId;
					std::string dataId;
					int feedbackFlag;
					std::string state;
					std::string dataMeta;
					int mine;
					int fixedFlag;
				};


				GetUserMarkItemInfoResult();
				explicit GetUserMarkItemInfoResult(const std::string &payload);
				~GetUserMarkItemInfoResult();
				std::string getMsg()const;
				long getRt()const;
				MsgInfo getMsgInfo()const;
				bool getSucc()const;
				std::string getTraceId()const;
				std::string getHost()const;
				std::string getErrorCode()const;
				int getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string msg_;
				long rt_;
				MsgInfo msgInfo_;
				bool succ_;
				std::string traceId_;
				std::string host_;
				std::string errorCode_;
				int code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ITAG_MODEL_GETUSERMARKITEMINFORESULT_H_