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

#include <alibabacloud/eiam/model/GetSynchronizationJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetSynchronizationJobResult::GetSynchronizationJobResult() :
	ServiceResult()
{}

GetSynchronizationJobResult::GetSynchronizationJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSynchronizationJobResult::~GetSynchronizationJobResult()
{}

void GetSynchronizationJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto synchronizationJobNode = value["SynchronizationJob"];
	if(!synchronizationJobNode["SynchronizationJobId"].isNull())
		synchronizationJob_.synchronizationJobId = synchronizationJobNode["SynchronizationJobId"].asString();
	if(!synchronizationJobNode["TargetType"].isNull())
		synchronizationJob_.targetType = synchronizationJobNode["TargetType"].asString();
	if(!synchronizationJobNode["TargetId"].isNull())
		synchronizationJob_.targetId = synchronizationJobNode["TargetId"].asString();
	if(!synchronizationJobNode["Direction"].isNull())
		synchronizationJob_.direction = synchronizationJobNode["Direction"].asString();
	if(!synchronizationJobNode["StartTime"].isNull())
		synchronizationJob_.startTime = std::stol(synchronizationJobNode["StartTime"].asString());
	if(!synchronizationJobNode["EndTime"].isNull())
		synchronizationJob_.endTime = std::stol(synchronizationJobNode["EndTime"].asString());
	if(!synchronizationJobNode["TriggerType"].isNull())
		synchronizationJob_.triggerType = synchronizationJobNode["TriggerType"].asString();
	if(!synchronizationJobNode["Status"].isNull())
		synchronizationJob_.status = synchronizationJobNode["Status"].asString();
	auto resultNode = synchronizationJobNode["Result"];
	if(!resultNode["ErrorMessage"].isNull())
		synchronizationJob_.result.errorMessage = resultNode["ErrorMessage"].asString();
	if(!resultNode["ErrorCode"].isNull())
		synchronizationJob_.result.errorCode = resultNode["ErrorCode"].asString();
	auto userStatisticsNode = resultNode["UserStatistics"];
	auto createdNode = userStatisticsNode["Created"];
	if(!createdNode["Total"].isNull())
		synchronizationJob_.result.userStatistics.created.total = std::stol(createdNode["Total"].asString());
	if(!createdNode["Success"].isNull())
		synchronizationJob_.result.userStatistics.created.success = std::stol(createdNode["Success"].asString());
	if(!createdNode["Failed"].isNull())
		synchronizationJob_.result.userStatistics.created.failed = std::stol(createdNode["Failed"].asString());
	if(!createdNode["Skipped"].isNull())
		synchronizationJob_.result.userStatistics.created.skipped = std::stol(createdNode["Skipped"].asString());
	auto updatedNode = userStatisticsNode["Updated"];
	if(!updatedNode["Total"].isNull())
		synchronizationJob_.result.userStatistics.updated.total = std::stol(updatedNode["Total"].asString());
	if(!updatedNode["Success"].isNull())
		synchronizationJob_.result.userStatistics.updated.success = std::stol(updatedNode["Success"].asString());
	if(!updatedNode["Failed"].isNull())
		synchronizationJob_.result.userStatistics.updated.failed = std::stol(updatedNode["Failed"].asString());
	if(!updatedNode["Skipped"].isNull())
		synchronizationJob_.result.userStatistics.updated.skipped = std::stol(updatedNode["Skipped"].asString());
	auto bindedNode = userStatisticsNode["Binded"];
	if(!bindedNode["Total"].isNull())
		synchronizationJob_.result.userStatistics.binded.total = std::stol(bindedNode["Total"].asString());
	if(!bindedNode["Success"].isNull())
		synchronizationJob_.result.userStatistics.binded.success = std::stol(bindedNode["Success"].asString());
	if(!bindedNode["Failed"].isNull())
		synchronizationJob_.result.userStatistics.binded.failed = std::stol(bindedNode["Failed"].asString());
	if(!bindedNode["Skipped"].isNull())
		synchronizationJob_.result.userStatistics.binded.skipped = std::stol(bindedNode["Skipped"].asString());
	auto deletedNode = userStatisticsNode["Deleted"];
	if(!deletedNode["Total"].isNull())
		synchronizationJob_.result.userStatistics.deleted.total = std::stol(deletedNode["Total"].asString());
	if(!deletedNode["Success"].isNull())
		synchronizationJob_.result.userStatistics.deleted.success = std::stol(deletedNode["Success"].asString());
	if(!deletedNode["Failed"].isNull())
		synchronizationJob_.result.userStatistics.deleted.failed = std::stol(deletedNode["Failed"].asString());
	if(!deletedNode["Skipped"].isNull())
		synchronizationJob_.result.userStatistics.deleted.skipped = std::stol(deletedNode["Skipped"].asString());
	auto sameNode = userStatisticsNode["Same"];
	if(!sameNode["Total"].isNull())
		synchronizationJob_.result.userStatistics.same.total = std::stol(sameNode["Total"].asString());
	if(!sameNode["Success"].isNull())
		synchronizationJob_.result.userStatistics.same.success = std::stol(sameNode["Success"].asString());
	if(!sameNode["Failed"].isNull())
		synchronizationJob_.result.userStatistics.same.failed = std::stol(sameNode["Failed"].asString());
	if(!sameNode["Skipped"].isNull())
		synchronizationJob_.result.userStatistics.same.skipped = std::stol(sameNode["Skipped"].asString());
	auto pushedNode = userStatisticsNode["Pushed"];
	if(!pushedNode["Total"].isNull())
		synchronizationJob_.result.userStatistics.pushed.total = std::stol(pushedNode["Total"].asString());
	if(!pushedNode["Success"].isNull())
		synchronizationJob_.result.userStatistics.pushed.success = std::stol(pushedNode["Success"].asString());
	if(!pushedNode["Failed"].isNull())
		synchronizationJob_.result.userStatistics.pushed.failed = std::stol(pushedNode["Failed"].asString());
	if(!pushedNode["Skipped"].isNull())
		synchronizationJob_.result.userStatistics.pushed.skipped = std::stol(pushedNode["Skipped"].asString());
	auto organizationalUnitStatisticsNode = resultNode["OrganizationalUnitStatistics"];
	auto created1Node = organizationalUnitStatisticsNode["Created"];
	if(!created1Node["Total"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.created1.total = std::stol(created1Node["Total"].asString());
	if(!created1Node["Success"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.created1.success = std::stol(created1Node["Success"].asString());
	if(!created1Node["Failed"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.created1.failed = std::stol(created1Node["Failed"].asString());
	if(!created1Node["Skipped"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.created1.skipped = std::stol(created1Node["Skipped"].asString());
	auto updated2Node = organizationalUnitStatisticsNode["Updated"];
	if(!updated2Node["Total"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.updated2.total = std::stol(updated2Node["Total"].asString());
	if(!updated2Node["Success"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.updated2.success = std::stol(updated2Node["Success"].asString());
	if(!updated2Node["Failed"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.updated2.failed = std::stol(updated2Node["Failed"].asString());
	if(!updated2Node["Skipped"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.updated2.skipped = std::stol(updated2Node["Skipped"].asString());
	auto binded3Node = organizationalUnitStatisticsNode["Binded"];
	if(!binded3Node["Total"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.binded3.total = std::stol(binded3Node["Total"].asString());
	if(!binded3Node["Success"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.binded3.success = std::stol(binded3Node["Success"].asString());
	if(!binded3Node["Failed"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.binded3.failed = std::stol(binded3Node["Failed"].asString());
	if(!binded3Node["Skipped"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.binded3.skipped = std::stol(binded3Node["Skipped"].asString());
	auto deleted4Node = organizationalUnitStatisticsNode["Deleted"];
	if(!deleted4Node["Total"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.deleted4.total = std::stol(deleted4Node["Total"].asString());
	if(!deleted4Node["Success"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.deleted4.success = std::stol(deleted4Node["Success"].asString());
	if(!deleted4Node["Failed"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.deleted4.failed = std::stol(deleted4Node["Failed"].asString());
	if(!deleted4Node["Skipped"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.deleted4.skipped = std::stol(deleted4Node["Skipped"].asString());
	auto same5Node = organizationalUnitStatisticsNode["Same"];
	if(!same5Node["Total"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.same5.total = std::stol(same5Node["Total"].asString());
	if(!same5Node["Success"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.same5.success = std::stol(same5Node["Success"].asString());
	if(!same5Node["Failed"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.same5.failed = std::stol(same5Node["Failed"].asString());
	if(!same5Node["Skipped"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.same5.skipped = std::stol(same5Node["Skipped"].asString());
	auto pushed6Node = organizationalUnitStatisticsNode["Pushed"];
	if(!pushed6Node["Total"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.pushed6.total = std::stol(pushed6Node["Total"].asString());
	if(!pushed6Node["Success"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.pushed6.success = std::stol(pushed6Node["Success"].asString());
	if(!pushed6Node["Failed"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.pushed6.failed = std::stol(pushed6Node["Failed"].asString());
	if(!pushed6Node["Skipped"].isNull())
		synchronizationJob_.result.organizationalUnitStatistics.pushed6.skipped = std::stol(pushed6Node["Skipped"].asString());
	auto groupStatisticsNode = resultNode["GroupStatistics"];
	auto created7Node = groupStatisticsNode["Created"];
	if(!created7Node["Total"].isNull())
		synchronizationJob_.result.groupStatistics.created7.total = std::stol(created7Node["Total"].asString());
	if(!created7Node["Success"].isNull())
		synchronizationJob_.result.groupStatistics.created7.success = std::stol(created7Node["Success"].asString());
	if(!created7Node["Failed"].isNull())
		synchronizationJob_.result.groupStatistics.created7.failed = std::stol(created7Node["Failed"].asString());
	if(!created7Node["Skipped"].isNull())
		synchronizationJob_.result.groupStatistics.created7.skipped = std::stol(created7Node["Skipped"].asString());
	auto updated8Node = groupStatisticsNode["Updated"];
	if(!updated8Node["Total"].isNull())
		synchronizationJob_.result.groupStatistics.updated8.total = std::stol(updated8Node["Total"].asString());
	if(!updated8Node["Success"].isNull())
		synchronizationJob_.result.groupStatistics.updated8.success = std::stol(updated8Node["Success"].asString());
	if(!updated8Node["Failed"].isNull())
		synchronizationJob_.result.groupStatistics.updated8.failed = std::stol(updated8Node["Failed"].asString());
	if(!updated8Node["Skipped"].isNull())
		synchronizationJob_.result.groupStatistics.updated8.skipped = std::stol(updated8Node["Skipped"].asString());
	auto binded9Node = groupStatisticsNode["Binded"];
	if(!binded9Node["Total"].isNull())
		synchronizationJob_.result.groupStatistics.binded9.total = std::stol(binded9Node["Total"].asString());
	if(!binded9Node["Success"].isNull())
		synchronizationJob_.result.groupStatistics.binded9.success = std::stol(binded9Node["Success"].asString());
	if(!binded9Node["Failed"].isNull())
		synchronizationJob_.result.groupStatistics.binded9.failed = std::stol(binded9Node["Failed"].asString());
	if(!binded9Node["Skipped"].isNull())
		synchronizationJob_.result.groupStatistics.binded9.skipped = std::stol(binded9Node["Skipped"].asString());
	auto deleted10Node = groupStatisticsNode["Deleted"];
	if(!deleted10Node["Total"].isNull())
		synchronizationJob_.result.groupStatistics.deleted10.total = std::stol(deleted10Node["Total"].asString());
	if(!deleted10Node["Success"].isNull())
		synchronizationJob_.result.groupStatistics.deleted10.success = std::stol(deleted10Node["Success"].asString());
	if(!deleted10Node["Failed"].isNull())
		synchronizationJob_.result.groupStatistics.deleted10.failed = std::stol(deleted10Node["Failed"].asString());
	if(!deleted10Node["Skipped"].isNull())
		synchronizationJob_.result.groupStatistics.deleted10.skipped = std::stol(deleted10Node["Skipped"].asString());
	auto same11Node = groupStatisticsNode["Same"];
	if(!same11Node["Total"].isNull())
		synchronizationJob_.result.groupStatistics.same11.total = std::stol(same11Node["Total"].asString());
	if(!same11Node["Success"].isNull())
		synchronizationJob_.result.groupStatistics.same11.success = std::stol(same11Node["Success"].asString());
	if(!same11Node["Failed"].isNull())
		synchronizationJob_.result.groupStatistics.same11.failed = std::stol(same11Node["Failed"].asString());
	if(!same11Node["Skipped"].isNull())
		synchronizationJob_.result.groupStatistics.same11.skipped = std::stol(same11Node["Skipped"].asString());
	auto pushed12Node = groupStatisticsNode["Pushed"];
	if(!pushed12Node["Total"].isNull())
		synchronizationJob_.result.groupStatistics.pushed12.total = std::stol(pushed12Node["Total"].asString());
	if(!pushed12Node["Success"].isNull())
		synchronizationJob_.result.groupStatistics.pushed12.success = std::stol(pushed12Node["Success"].asString());
	if(!pushed12Node["Failed"].isNull())
		synchronizationJob_.result.groupStatistics.pushed12.failed = std::stol(pushed12Node["Failed"].asString());
	if(!pushed12Node["Skipped"].isNull())
		synchronizationJob_.result.groupStatistics.pushed12.skipped = std::stol(pushed12Node["Skipped"].asString());
	auto groupMemberStatisticsNode = resultNode["GroupMemberStatistics"];
	auto created13Node = groupMemberStatisticsNode["Created"];
	if(!created13Node["Total"].isNull())
		synchronizationJob_.result.groupMemberStatistics.created13.total = std::stol(created13Node["Total"].asString());
	if(!created13Node["Success"].isNull())
		synchronizationJob_.result.groupMemberStatistics.created13.success = std::stol(created13Node["Success"].asString());
	if(!created13Node["Failed"].isNull())
		synchronizationJob_.result.groupMemberStatistics.created13.failed = std::stol(created13Node["Failed"].asString());
	if(!created13Node["Skipped"].isNull())
		synchronizationJob_.result.groupMemberStatistics.created13.skipped = std::stol(created13Node["Skipped"].asString());
	auto updated14Node = groupMemberStatisticsNode["Updated"];
	if(!updated14Node["Total"].isNull())
		synchronizationJob_.result.groupMemberStatistics.updated14.total = std::stol(updated14Node["Total"].asString());
	if(!updated14Node["Success"].isNull())
		synchronizationJob_.result.groupMemberStatistics.updated14.success = std::stol(updated14Node["Success"].asString());
	if(!updated14Node["Failed"].isNull())
		synchronizationJob_.result.groupMemberStatistics.updated14.failed = std::stol(updated14Node["Failed"].asString());
	if(!updated14Node["Skipped"].isNull())
		synchronizationJob_.result.groupMemberStatistics.updated14.skipped = std::stol(updated14Node["Skipped"].asString());
	auto binded15Node = groupMemberStatisticsNode["Binded"];
	if(!binded15Node["Total"].isNull())
		synchronizationJob_.result.groupMemberStatistics.binded15.total = std::stol(binded15Node["Total"].asString());
	if(!binded15Node["Success"].isNull())
		synchronizationJob_.result.groupMemberStatistics.binded15.success = std::stol(binded15Node["Success"].asString());
	if(!binded15Node["Failed"].isNull())
		synchronizationJob_.result.groupMemberStatistics.binded15.failed = std::stol(binded15Node["Failed"].asString());
	if(!binded15Node["Skipped"].isNull())
		synchronizationJob_.result.groupMemberStatistics.binded15.skipped = std::stol(binded15Node["Skipped"].asString());
	auto deleted16Node = groupMemberStatisticsNode["Deleted"];
	if(!deleted16Node["Total"].isNull())
		synchronizationJob_.result.groupMemberStatistics.deleted16.total = std::stol(deleted16Node["Total"].asString());
	if(!deleted16Node["Success"].isNull())
		synchronizationJob_.result.groupMemberStatistics.deleted16.success = std::stol(deleted16Node["Success"].asString());
	if(!deleted16Node["Failed"].isNull())
		synchronizationJob_.result.groupMemberStatistics.deleted16.failed = std::stol(deleted16Node["Failed"].asString());
	if(!deleted16Node["Skipped"].isNull())
		synchronizationJob_.result.groupMemberStatistics.deleted16.skipped = std::stol(deleted16Node["Skipped"].asString());
	auto same17Node = groupMemberStatisticsNode["Same"];
	if(!same17Node["Total"].isNull())
		synchronizationJob_.result.groupMemberStatistics.same17.total = std::stol(same17Node["Total"].asString());
	if(!same17Node["Success"].isNull())
		synchronizationJob_.result.groupMemberStatistics.same17.success = std::stol(same17Node["Success"].asString());
	if(!same17Node["Failed"].isNull())
		synchronizationJob_.result.groupMemberStatistics.same17.failed = std::stol(same17Node["Failed"].asString());
	if(!same17Node["Skipped"].isNull())
		synchronizationJob_.result.groupMemberStatistics.same17.skipped = std::stol(same17Node["Skipped"].asString());
	auto pushed18Node = groupMemberStatisticsNode["Pushed"];
	if(!pushed18Node["Total"].isNull())
		synchronizationJob_.result.groupMemberStatistics.pushed18.total = std::stol(pushed18Node["Total"].asString());
	if(!pushed18Node["Success"].isNull())
		synchronizationJob_.result.groupMemberStatistics.pushed18.success = std::stol(pushed18Node["Success"].asString());
	if(!pushed18Node["Failed"].isNull())
		synchronizationJob_.result.groupMemberStatistics.pushed18.failed = std::stol(pushed18Node["Failed"].asString());
	if(!pushed18Node["Skipped"].isNull())
		synchronizationJob_.result.groupMemberStatistics.pushed18.skipped = std::stol(pushed18Node["Skipped"].asString());

}

GetSynchronizationJobResult::SynchronizationJob GetSynchronizationJobResult::getSynchronizationJob()const
{
	return synchronizationJob_;
}

