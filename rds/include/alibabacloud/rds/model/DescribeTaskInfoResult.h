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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBETASKINFORESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBETASKINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeTaskInfoResult : public ServiceResult
			{
			public:


				DescribeTaskInfoResult();
				explicit DescribeTaskInfoResult(const std::string &payload);
				~DescribeTaskInfoResult();
				std::string getExpectedFinishTime()const;
				void setExpectedFinishTime(const std::string& expectedFinishTime);
				std::string getStatus()const;
				void setStatus(const std::string& status);
				std::string getProgress()const;
				void setProgress(const std::string& progress);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getFinishTime()const;
				void setFinishTime(const std::string& finishTime);
				std::string getTaskAction()const;
				void setTaskAction(const std::string& taskAction);
				std::string getCreateTime()const;
				void setCreateTime(const std::string& createTime);
				std::string getProgressInfo()const;
				void setProgressInfo(const std::string& progressInfo);
				std::string getBeginTime()const;
				void setBeginTime(const std::string& beginTime);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				std::string getTaskErrorCode()const;
				void setTaskErrorCode(const std::string& taskErrorCode);
				std::string getTaskErrorMessage()const;
				void setTaskErrorMessage(const std::string& taskErrorMessage);

			protected:
				void parse(const std::string &payload);
			private:
				std::string expectedFinishTime_;
				std::string status_;
				std::string progress_;
				std::string taskId_;
				std::string finishTime_;
				std::string taskAction_;
				std::string createTime_;
				std::string progressInfo_;
				std::string beginTime_;
				std::string dBName_;
				std::string taskErrorCode_;
				std::string taskErrorMessage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBETASKINFORESULT_H_