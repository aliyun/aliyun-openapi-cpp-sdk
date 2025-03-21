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

#ifndef ALIBABACLOUD_EIAM_MODEL_LISTSYNCHRONIZATIONJOBSRESULT_H_
#define ALIBABACLOUD_EIAM_MODEL_LISTSYNCHRONIZATIONJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eiam/EiamExport.h>

namespace AlibabaCloud
{
	namespace Eiam
	{
		namespace Model
		{
			class ALIBABACLOUD_EIAM_EXPORT ListSynchronizationJobsResult : public ServiceResult
			{
			public:
				struct SynchronizationJob
				{
					struct Result
					{
						struct UserStatistics
						{
							struct Created
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Updated
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Binded
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Deleted
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Same
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Pushed
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Exported
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							Same same;
							Pushed pushed;
							Updated updated;
							Binded binded;
							Deleted deleted;
							Exported exported;
							Created created;
						};
						struct OrganizationalUnitStatistics
						{
							struct Created1
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Updated2
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Binded3
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Deleted4
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Same5
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Pushed6
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							Same5 same5;
							Created1 created1;
							Binded3 binded3;
							Pushed6 pushed6;
							Updated2 updated2;
							Deleted4 deleted4;
						};
						struct GroupStatistics
						{
							struct Created7
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Updated8
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Binded9
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Deleted10
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Same11
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Pushed12
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							Updated8 updated8;
							Created7 created7;
							Pushed12 pushed12;
							Binded9 binded9;
							Deleted10 deleted10;
							Same11 same11;
						};
						struct GroupMemberStatistics
						{
							struct Created13
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Updated14
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Binded15
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Deleted16
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Same17
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							struct Pushed18
							{
								long failed;
								long total;
								long skipped;
								long success;
							};
							Same17 same17;
							Binded15 binded15;
							Created13 created13;
							Updated14 updated14;
							Pushed18 pushed18;
							Deleted16 deleted16;
						};
						OrganizationalUnitStatistics organizationalUnitStatistics;
						UserStatistics userStatistics;
						GroupMemberStatistics groupMemberStatistics;
						GroupStatistics groupStatistics;
						std::string errorCode;
						std::string errorMessage;
					};
					std::string status;
					std::string triggerType;
					std::string synchronizationJobId;
					std::string description;
					long endTime;
					std::string targetType;
					long startTime;
					std::string direction;
					std::string targetId;
					Result result;
				};


				ListSynchronizationJobsResult();
				explicit ListSynchronizationJobsResult(const std::string &payload);
				~ListSynchronizationJobsResult();
				long getTotalCount()const;
				std::string getNextToken()const;
				std::vector<SynchronizationJob> getSynchronizationJobs()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string nextToken_;
				std::vector<SynchronizationJob> synchronizationJobs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EIAM_MODEL_LISTSYNCHRONIZATIONJOBSRESULT_H_